#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main() {
  int64_t weaponClasses = 0;
  int64_t metalTypes = 0;
  scanf("%" SCNi64 " %" SCNi64, &weaponClasses, &metalTypes);

  int64_t requiredIngotsForWeapon[weaponClasses];
  for (int i = 0; i < weaponClasses; ++i) {
    scanf("%" SCNi64, &requiredIngotsForWeapon[i]);
  }

  int64_t ingotsBackForWeapon[weaponClasses];
  for (int i = 0; i < weaponClasses; ++i) {
    scanf("%" SCNi64, &ingotsBackForWeapon[i]);
  }

  int64_t ingotsInInventory[metalTypes];
  for (int i = 0; i < metalTypes; ++i) {
    scanf("%" SCNi64, &ingotsInInventory[i]);
  }

  // Best solution is the one with lowest a_i - b_i
  bool hasFoundBestSolution = false;
  int64_t ingotTypeIndex = 0;
  int64_t xp = 0;
  while (!hasFoundBestSolution) {

    int64_t weaponClassIndex = -1;
    // Look for the weapong class that gives more ingots back after melting
    for (int i = 0; i < weaponClasses; ++i) {
      if (requiredIngotsForWeapon[i] > ingotsInInventory[ingotTypeIndex]) {
        continue;
      } else if (weaponClassIndex == -1) {
        weaponClassIndex = i;
      }
      if (requiredIngotsForWeapon[i] <= ingotsInInventory[ingotTypeIndex] &&
          (requiredIngotsForWeapon[weaponClassIndex] -
           ingotsBackForWeapon[weaponClassIndex]) >
              (requiredIngotsForWeapon[i] - ingotsBackForWeapon[i])) {
        weaponClassIndex = i;
      }
    }

    if (weaponClassIndex == -1) {
      ingotTypeIndex++;
    } else {
      ingotsInInventory[ingotTypeIndex] -=
          requiredIngotsForWeapon[weaponClassIndex] -
          ingotsBackForWeapon[weaponClassIndex];
      xp += 2;
    }

    // Stopping condition
    if (ingotTypeIndex == metalTypes) {
      hasFoundBestSolution = true;
    }
  }

  printf("%" PRIi64 "\n", xp);
}
