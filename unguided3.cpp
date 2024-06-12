#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    vector<int> array = {1, 2, 3, 4, 5};

    map<int, int> transformedMap;
    transform(array.begin(), array.end(), inserter(transformedMap, transformedMap.begin()),
              [](int element) { return make_pair(element, element * element); });

    
    cout << "Hasil transformasi dalam map:\n";
    for (const auto& pair : transformedMap) {
        cout << pair.first << " -> " << pair.second << "\n";
    }

    return 0;
}
