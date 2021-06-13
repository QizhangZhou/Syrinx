
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
    fax[findFather(fax, x)] = findFather(fay, y);
}

void testUnionFind()
{
    int num_b = 3;
    int fab[3] = {0};
    initUnionFind(fab, num_b);
    mergeFather(fab, 0, fab, 1);
    mergeFather(fab, 1, fab, 2);
    cout << "tree b 0root is " << findFather(fab, 0) << endl;
    cout << "tree b 1root is " << findFather(fab, 1) << endl;
    cout << "tree b 2root is " << findFather(fab, 2) << endl;
}