
#include "unionfind.h"
#include <iostream>

using namespace std;

void initUnionFind(int *fa, int num)
{
    for (int i = 0; i < num; i++) {
        fa[i]  = i;
    }
}

int findFather(int *fa, int x)
{
    if (fa[x] == x) {
        return fa[x];
    } else {
        findFather(fa, fa[x]);
    }
}

void mergeFather(int *fax, int x, int*fay, int y)
{
    fax[findFather(fax, x) - 1] = findFather(fay, y);
}

void testUnionFind()
{
    // int num_a = 2;
    // int faa[2] = {0};
    // initUnionFind(faa, num_a);
    // mergeFather(faa, 1, faa, 2);

    int num_b = 3;
    int fab[3] = {0};
    initUnionFind(fab, num_b);
    mergeFather(fab, 0, fab, 1);
    mergeFather(fab, 1, fab, 2);
    cout << "tree b root is " << findFather(fab, 2) << endl;
    cout << "tree b root is " << findFather(fab, 1) << endl;


}