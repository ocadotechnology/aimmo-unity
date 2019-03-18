using UnityEngine;
using NUnit.Framework;
using MapFeatures.Interactable;

namespace AIMMOUnityTest
{
    [TestFixture]
    internal class PickupGeneratorTest
    {
        [Test]
        public void TestPickupGeneratorByPrefab()
        {
            GameObject healthPickup = Resources.Load<GameObject>("Prefabs/Pickups/pickup_health");

            GameObject generatedPickup = PickupGenerator.GeneratePickup(healthPickup);

            Assert.AreEqual(0, generatedPickup.transform.localPosition.x);
            Assert.AreEqual(0, generatedPickup.transform.localPosition.y);
            Assert.AreEqual(0, generatedPickup.transform.localPosition.z);

            Assert.AreEqual(generatedPickup.transform.parent.name, "Pickups");
            Assert.AreEqual(generatedPickup.tag, "Pickup");
        }

        [Test]
        public void TestPickupGeneratorByDTO()
        {
            InteractableDTO interactableDTO = new InteractableDTO();
            Location pickupLocation = new Location(10, 20);
            interactableDTO.location = pickupLocation;
            interactableDTO.type = "health";

            GameObject generatedPickup = PickupGenerator.GeneratePickup(interactableDTO);

            Assert.AreEqual(pickupLocation.x, generatedPickup.transform.localPosition.x);
            Assert.AreEqual(0, generatedPickup.transform.localPosition.y);
            Assert.AreEqual(pickupLocation.y, generatedPickup.transform.localPosition.z);

            Assert.AreEqual(generatedPickup.transform.parent.name, "Pickups");
            Assert.AreEqual(generatedPickup.name, "pickup_health_10_20");

            Assert.AreEqual(generatedPickup.transform.localPosition.x, 10);
            Assert.AreEqual(generatedPickup.transform.localPosition.z, 20);
            Assert.AreEqual(generatedPickup.transform.localPosition.y, 0);

            Assert.AreEqual(generatedPickup.tag, "Pickup");
        }
    }
}
