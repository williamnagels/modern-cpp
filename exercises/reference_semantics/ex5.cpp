#include <global.h>


namespace
{

template <typename T>
class SafePtr
{
};

}

/*
 * GOAL: Create a type that is very similar to the STL's std::unique_ptr
 *
 * TODO: Add the following to the "SafePtr" class:
 *   - A public constructor that accepts a pointer to an object of type T.
 *   - A private unmanaged pointer member of type T*. Assign the value received into the constructor to this pointer.
 *   - A default constructor that initializes the private member pointer of type T* with nullptr.
 *   - A destructor that deletes the unmanaged pointer of type T*.
 *   - A dereference operator that dereferences the unmanaged member pointer of type T* and returns a reference of type T&.
 *   - A get function that returns the unmanaged pointer of type T*.
 *   - A boolean test operator that checks the unmanaged member pointer of type T* is not a nullptr.
 *   - Move assignment operator and move constructor, that constructs a SafePtr<T> from an other SafePtr<T>
 */
void move_ex5()
{
  /*
   * TODO: Uncomment these lines when the SafePtr has been implemented
   */
  // SafePtr<int> p1{new int(1)};
  // ASSERT(*p1 == 1);
  // SafePtr<int> p2{new int(2)};
  // ASSERT(*p2 == 2);
  // SafePtr<int> p3{};
  // ASSERT(p3.get() == nullptr);

  /*
   * TODO: Add move constructors to the SafePtr class. When constructing an object of type SafePtr by r-value reference
   * it must take ownership of the resources of the expiring SafePtr instance.
   */
  // SafePtr<int> p4 = SafePtr<int>(new int(4));
  // ASSERT(*p4 == 4);
  // std::vector<SafePtr<int>> v;
  // v.push_back(SafePtr<int>(new int(1)));
  // ASSERT(*v[0] == 1);
  // SafePtr<int> p5{new int(5)};
  // SafePtr<int> p6 = std::move(p5);
  // ASSERT(*p6 == 5);
  // ASSERT(p5.get() == nullptr);

  /*
   * TODO: Add a move assignment operator to the SafePtr class and uncomment the code below
   */
  // SafePtr<int> p7 = SafePtr<int>(new int(7));
  // SafePtr<int> p8 = SafePtr<int>(new int(8));
  // p7 = std::move(p8);
  // ASSERT(*p7 == 8);
  // ASSERT(p8.get() == nullptr);

  // TODO: Bonus challenge: Allow the deallocator for SafePtr to be customizable without increasing its size. 
  // The destructor should use std::default_delete by default, but it should also support a custom deleter if one is provided.
  // ASSERT(sizeof(p7) == sizeof(int*));
}
