using UnityEngine;

namespace MapFeatures
{
    /* Every object that appears in the scene apart from avatars and the floor is
	 * considered a map feature. An object inheriting from MapFeatureManager can
	 * create and delete the map features with the corresponding identifier. This
	 * objects must specify how this identifier is built as well as how the map
	 * feature is drawn on the scene.
	 *
	 * It is important to note that we are NOT concerned about the game logic. For
	 * instance we don't detect if an avatar is in a health point. All of that is
	 * implemented in the backend.
	 */

    public interface IMapFeatureManager<FeatureDTO>
    {
        bool Create(FeatureDTO dto);
        bool UpdateFeature(FeatureDTO dto);
        bool Delete(FeatureDTO dto);
        void Overwrite(FeatureDTO[] dtos);

        string MapFeatureId(string id);
        string MapFeatureTag();
    }

    public abstract class MapFeatureManager<FeatureDTO> : MonoBehaviour, IMapFeatureManager<FeatureDTO>
    {
        public abstract bool Create(FeatureDTO dto);
        public abstract bool Delete(FeatureDTO dto);
        public abstract string MapFeatureId(string id);
        public abstract string MapFeatureTag();
        public abstract bool UpdateFeature(FeatureDTO dto);

        public void Overwrite(FeatureDTO[] dtos)
        {
            RemoveAllFeatures();
            foreach (FeatureDTO dto in dtos)
            {
                Create(dto);
            }
        }

        private void RemoveAllFeatures()
        {
            GameObject[] features = GameObject.FindGameObjectsWithTag(MapFeatureTag());
            foreach (GameObject feature in features)
            {
                Destroy(feature);
            }
        }
    }
}
