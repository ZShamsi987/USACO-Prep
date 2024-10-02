/*
only 1/10 :(
took 1 hour

problem was this always checks for the x distance in relation to the first point/index
this assumes the second point is in line with first horizontally, not right
gotta make it based on parallelness i think, not sure how to change rn

not getting any probs right kinda sad will look at parallel soon



*/



#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);  

    int N;
    cin >> N;

    vector<pair<double, double>> coords;

    for (int a = 0; a < N; a++) {
        double x, y;
        cin >> x >> y;
        pair<double, double> p1 = make_pair(x, y);
        coords.push_back(p1);
    }

    double maxdiffx = 0; 
    double maxdiffy = 0;

    for(int i = 0; i < N; i++){
        double coordxo = coords[i].first;
        double coordyo = coords[i].second;

        for(int j = i + 1; j < N; j++){
            double coordx = coords[j].first;
            double coordy = coords[j].second;
            
            if(coordyo == coordy){
                double curmaxx = abs(coordxo - coordx);
                maxdiffx = max(maxdiffx, curmaxx); 
            }
            if(coordxo==coordx){
                double curmaxy = abs(coordyo - coordy);
                maxdiffy = max(maxdiffx, curmaxy); 
            }
        }
    }

    double area = 2*(maxdiffx*1/2)*maxdiffy;
    cout<<area;
}
