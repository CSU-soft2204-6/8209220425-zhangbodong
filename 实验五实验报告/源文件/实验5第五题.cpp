#include "iostream"
#include "vector" 
#include "algorithm" 
using namespace std;
void print_vector(vector<int> v) {
    if (v.size() > 0) {
        cout << "{";
        for (int i = 0; i<int(v.size()); i++) {
            cout << v[i] << ",";
        }
        cout << "\b}";
    }
    else {
        cout << "{}";
    }
}
template<typename T>
vector<T> intersection(vector<T>& v1, vector<T>& v2) {
    vector<T> v;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v));//�󽻼� 
    return v;
}
int main() {
    vector<int> v1, v2, v;
    cout << "�����һ��vector" << endl;
    for (int i = 0; i < 5; i++) { 
        int a;
        
        cin >> a;
        v1.push_back(a);
    }
    cout << "����ڶ���vector" << endl;
    for (int i = 0; i < 5; i++) { 
        int a;
        
        cin >> a;
        v2.push_back(a);
    }
    cout << "��v1��v2�Ľ�����";
    v = intersection(v1, v2);
    print_vector(v);
    cout << endl;
    return 0;
}