// In C++, std::vector is a dynamic array provided by the Standard Template Library (STL).
// It offers a sequence container that can dynamically resize itself during runtime, unlike fixed-size C-style arrays.
// Here are some common operations and methods about vectors:
#include<iostream>

// Required for Vectors:
#include<vector>

using namespace std;

int main() {
  // Declaration of a vector:
  // vector<T> my_vector;
  // where T as in a datatype
  vector<int> a; // Declares an empty vector
  vector<int> b = {1,2,3,4,5,6,7,8,9,10}; // Declares and initialize a vector

  // Adding elements:
  // my_vector.push_back(n) to the end,
  // my_vector.insert(iterator, n) to a specific position
  int n = 11;
  a.push_back(n);
  b.push_back(b.begin() + 5, n); // inserts at index 5

  // Accessing elements:
  // int m = my_vector[n] using array-like indexing
  // int m = my_vector.back() accessing the last element
  // int m = my_vector.at(n) accessing with bounds checking
  int access_pos = 1;
  int index_n = a[access_pos];
  int last_element_in_b = b.back();
  int at_n_in_a = a.at(access_pos);

  // Removing elements:
  // my_vector.pop_back() removes the last element
  // my_vector.erase(it) removes element at a specific position
  // my_vector.clear() removes all elements
  int erase_pos = 2;
  a.pop_back();
  b.erase(b.begin() + erase_pos);
  b.clear();

  // Size and Capacity:
  // size_t cur_size = my_vector.size() number of elements
  // size_t cur_capa = my_vector.capacity() reserved memory capacity
  // bool is_empty = my_vector.empty() returns if the vector is empty
  // Here we recreate a new vector as an example:
  vector<int> c = {1,3,5,7,9,11,13,15};
  size_t sizeof_c = c.size();
  size_t capaof_c = c.capacity();
  bool c_isempty = c.empty();
}
