#include <iostream>
#include <unordered_map>

using namespace std;

class Hashtable {
  unordered_map<const void *, const void *> hmap;

  public:
      void put(const void *key, const void *value) {
        hmap[key] = value;
      }

      const void *get(const void *key) {
        return hmap[key];
      }

};


int main() {
    Hashtable ht;
    ht.put("Bob", "Dylan");
    int one = 1;
    ht.put("one", &one);
    std::cout << (char *)ht.get("Bob") << "; " << *(int *)ht.get("one");
}
