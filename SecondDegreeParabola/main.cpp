#include <iostream>
#include <vector>
#include <valarray>
#include <numeric>

using namespace std;

int main() {
    valarray<double> x = {0, 1, 2, 3, 4};
    valarray<double> y = {1, 1.8, 1.3, 2, 6.3};
    vector<double> xy, XSquare, XCube, XQuard, XSquareY;
    vector<vector<double>> Resultant, Base, Inverse, FinalResult;


//===================xy, XSquare, XCube, XQuard, XSquareY ============FILLER BEGIN======================================
    for (auto a = 0; a < x.size(); ++a) {
        xy.push_back(x[a] * y[a]);
        XSquare.push_back(x[a] * x[a]);
        XCube.push_back(x[a] * x[a] * x[a]);
        XQuard.push_back(x[a] * x[a] * x[a] * x[a]);
        XSquareY.push_back(x[a] * x[a] * y[a]);
    }
//===================xy, XSquare, XCube, XQuard, XSquareY ============FILLER END========================================
//===================xy, XSquare, XCube, XQuard, XSquareY ============ SUMMITION BEGIN =================================
    double Sum_x = x.sum(), Sum_y = y.sum(), Sum_xy = accumulate(xy.begin(), xy.end(), 0.0), XSquareSum = accumulate(
            XSquare.begin(), XSquare.end(), 0.0), n = x.size(), XCubeSum = accumulate(XCube.begin(), XCube.end(),
                                                                                      0.0), XSquareYSum = accumulate(
            XSquareY.begin(), XSquareY.end(), 0.0), XQuardSum = accumulate(XQuard.begin(), XQuard.end(),
                                                                           0.0), Determinant = 0.0;


//===================xy, XSquare, XCube, XQuard, XSquareY ============ SUMMITION END ===================================
//===================xy, XSquare, XCube, XQuard, XSquareY ============ MATRIX CREATION =================================

    Base.push_back({});
    Base[0].push_back(n);
    Base[0].push_back(Sum_x);
    Base[0].push_back(XSquareSum);
    Base.push_back(Base[0]);
    Base[1][0] = Sum_x;
    Base[1][1] = XSquareSum;
    Base[1][2] = XCubeSum;
    Base.push_back(Base[0]);
    Base[2][0] = XSquareSum;
    Base[2][1] = XCubeSum;
    Base[2][2] = XQuardSum;
    for(int i=0;i<3;++i){

        Resultant.push_back({});
    }
    Resultant[0].push_back(Sum_y);
    Resultant[1].push_back(Sum_xy);
    Resultant[2].push_back(XSquareYSum);

//============================================MATRIX FILLER============================================================
    for (int i = 0; i < 3; i++)
        Determinant = Determinant + (Base[0][i] * (Base[1][(i + 1) % 3] * Base[2][(i + 2) % 3] -
                                                   Base[1][(i + 2) % 3] * Base[2][(i + 1) % 3]));
//============================================MATRIX INVERSE===========================================================
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Inverse.push_back({});
            Inverse[i].push_back(((Base[(j + 1) % 3][(i + 1) % 3] * Base[(j + 2) % 3][(i + 2) % 3]) -
                                  (Base[(j + 1) % 3][(i + 2) % 3] * Base[(j + 2) % 3][(i + 1) % 3])) / Determinant);
        }
    }
//============================================FINAL MATRIX CREATION ====================================================
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            FinalResult.push_back({0});
    }
//===========================================FINAL MATRIX MULTIPLICATION================================================
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 1; ++j)
            for (int k = 0; k < 3; ++k) {
                FinalResult[i][j] += Inverse[i][k] * Resultant[k][j];
            }
//==========================================RESULT PRINTING=============================================================
    cout << endl << "Y = " << FinalResult[0][0] << " + " << FinalResult[1][0] << " X" << " + " << FinalResult[2][0] << " X²";
    return 0;
}
