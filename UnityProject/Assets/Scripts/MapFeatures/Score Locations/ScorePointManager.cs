using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;

/* This class manages the score points. If an avatar is in a score point its
 * score is incremented by one every iteration.
 */

namespace MapFeatures.ScoreLocations
{
    public class ScorePointManager : MapFeatureManager<ScoreLocationDTO>
    {
        List<ScoreLocationDTO> currentScores = new List<ScoreLocationDTO>();
        List<ScoreLocationDTO> scoresToDelete = new List<ScoreLocationDTO>();
        List<ScoreLocationDTO> scoresToCreate = new List<ScoreLocationDTO>();

        GameObject scoreFolder;

        public void Start()
        {
            scoreFolder = GameObject.Find("Scores");
        }

        public override bool Create(ScoreLocationDTO dto)
        {
            // TODO: some checking that this location is free to place on.
            GameObject score = ScoreGenerator.GenerateScore(dto, scoreFolder.transform);

            if (score == null)
            {
                Debug.Log("Generated pickup is null!");
                return false;
            }

            // Update currentScores for next UpdateFeatures call.
            currentScores.Add(dto);

            return true;
        }

        public override bool Delete(ScoreLocationDTO dto)
        {
            if (currentScores.Contains(dto))
            {

                if (!currentScores.Remove(dto))
                {
                    return false;
                }

                // TODO: handle with dynamic type when that is implemented.
                GameObject objectToDestroy = GameObject.Find("score_" + "bluedisk" + "_" + dto.location.x + "_" + dto.location.y);

                DestroyImmediate(objectToDestroy);

                return true;
            }

            Debug.Log("dto not found in currentPickups!");
            return false;
        }

        public override string MapFeatureId(string id)
        {
            return string.Format("ScoreLocation{0}", id);
        }

        public override string MapFeatureTag()
        {
            return "ScoreLocation";
        }

        public override bool UpdateFeatures(ScoreLocationDTO[] dto)
        {
            CreateScoreLocations(dto);
            DeleteScoreLocations(dto);

            return true;
        }

        private bool CreateScoreLocations(ScoreLocationDTO[] dto)
        {
            // Score location list will be mutable.
            List<ScoreLocationDTO> newScoreLocations = dto.OfType<ScoreLocationDTO>().ToList();

            // Clear old contents.
            scoresToCreate.Clear();

            // Find elements that exist in provided array that doesn't exist
            // in current world scores.
            scoresToCreate = (List<ScoreLocationDTO>)newScoreLocations.Except(currentScores).ToList();

            foreach (ScoreLocationDTO score in scoresToCreate)
            {
                Create(score);
            }

            return true;
        }

        private bool DeleteScoreLocations(ScoreLocationDTO[] dto)
        {
            // Score location list will be mutable.
            List<ScoreLocationDTO> newScores = dto.OfType<ScoreLocationDTO>().ToList();

            // Clear old contents.
            scoresToDelete.Clear();

            // We find elements that exist in currentScores but not dto
            // (ie. newPickups).
            scoresToDelete = (List<ScoreLocationDTO>)currentScores.Except(newScores).ToList();

            foreach (ScoreLocationDTO score in scoresToDelete)
            {
                Delete(score);
            }

            return true;
        }
    }
}
