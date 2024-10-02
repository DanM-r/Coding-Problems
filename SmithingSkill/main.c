#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

void swap(int64_t* val1, int64_t* val2);

void sort2Arrays(int64_t* arr1, int64_t* arr2, int64_t arr_count);

int main() {
  int64_t weaponTypes = 0;
  int64_t metalTypes = 0;
  int64_t xp = 0;

  scanf("%" SCNi64 " %" SCNi64, &weaponTypes, &metalTypes);

  // Ingot cost for each weapon forging
  int64_t forgingCosts[weaponTypes];
  // Ingot cost for each weapon melting
  // a_i - b_i
  int64_t meltingCosts[weaponTypes];
  // Resources
  int64_t resources[metalTypes];

  for (int i = 0; i < weaponTypes; ++i) {
    scanf("%" SCNi64, &forgingCosts[i]);
    meltingCosts[i] = forgingCosts[i];
  }

  int64_t ingotsBack = 0;
  for (int i = 0; i < weaponTypes; ++i) {
    scanf("%" SCNi64, &ingotsBack);
    meltingCosts[i] -= ingotsBack;
  }

  for (int i = 0; i < metalTypes; ++i) {
    scanf("%" SCNi64, &resources[i]);
  }

  sort2Arrays(meltingCosts, forgingCosts, weaponTypes);

  for (int i = 0; i < weaponTypes; i++)
  {
    printf("%li", meltingCosts[i]);
  }


  for (int i = 0; i < metalTypes; ++i)
  {
    int j = 0;
    while (j < weaponTypes)
    {
      if (resources[i] >= forgingCosts[j])
      {
        resources[i] -= meltingCosts[j];
        xp += 2;
      }
      else 
      {
        j++;
      }
    }
  }

  printf("%" PRIi64 "\n", xp);
}

void swap(int64_t* val1, int64_t* val2)
{
  int64_t temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}

void sort2Arrays(int64_t* arr1, int64_t* arr2, int64_t arr_count)
{
  // Sort both arrays
  // Best sort algorithm: insertion sort because the best case is O(n)
  // while the worst is O(n^2)
  for (int i = 1; i < arr_count; ++i)
  {
    int temp_i = i;
    while (arr1[temp_i - 1] > arr1[temp_i])
    {
      swap(&arr1[temp_i - 1], &arr1[temp_i]);
      swap(&arr2[temp_i - 1], &arr2[temp_i]);
      temp_i -= 1;
    }
  }
}
