using UnityEngine;
using NUnit.Framework;
using MapFeatures.Interactables;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class InteractableGeneratorTest
    {
        [Test]
        public void TestInteractableGeneratorByPrefab()
        {
            GameObject healthInteractable = Resources.Load<GameObject>("Prefabs/Interactables/interactable_health");

            GameObject generatedInteractable = InteractableGenerator.GenerateInteractable(healthInteractable);

            Assert.AreEqual(0, generatedInteractable.transform.localPosition.x);
            Assert.AreEqual(0, generatedInteractable.transform.localPosition.y);
            Assert.AreEqual(0, generatedInteractable.transform.localPosition.z);

            Assert.AreEqual(generatedInteractable.transform.parent.name, "Interactables");
            Assert.AreEqual(generatedInteractable.tag, "Interactable");
        }

        [Test]
        public void TestInteractableGeneratorByDTO()
        {
            InteractableDTO interactableDTO = new InteractableDTO();
            Location interactableLocation = new Location(10, 20);
            interactableDTO.location = interactableLocation;
            interactableDTO.type = "health";

            GameObject generatedInteractable = InteractableGenerator.GenerateInteractable(interactableDTO);

            Assert.AreEqual(interactableLocation.x, generatedInteractable.transform.localPosition.x);
            Assert.AreEqual(0, generatedInteractable.transform.localPosition.y);
            Assert.AreEqual(interactableLocation.y, generatedInteractable.transform.localPosition.z);

            Assert.AreEqual(generatedInteractable.transform.parent.name, "Interactables");
            Assert.AreEqual(generatedInteractable.name, "interactable_health_10_20");

            Assert.AreEqual(generatedInteractable.transform.localPosition.x, 10);
            Assert.AreEqual(generatedInteractable.transform.localPosition.z, 20);
            Assert.AreEqual(generatedInteractable.transform.localPosition.y, 0);

            Assert.AreEqual(generatedInteractable.tag, "Interactable");
        }
    }
}
