#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<pair<int, int>> points(n); 
    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second; 
    }

    pair<int, int> furthestPoint = points[0];
    long long maxDistanceSquared = furthestPoint.first * furthestPoint.first + furthestPoint.second * furthestPoint.second; // Вычисляем квадрат расстояния до начала координат

    
    for (int i = 1; i < n; ++i) {
        long long distanceSquared = points[i].first * points[i].first + points[i].second * points[i].second; // Квадрат расстояния до начала координат
        if (distanceSquared > maxDistanceSquared) { 
            maxDistanceSquared = distanceSquared; 
            furthestPoint = points[i]; 
        }
    }

 
    cout << furthestPoint.first << " " << furthestPoint.second << endl;

    return 0;
}
