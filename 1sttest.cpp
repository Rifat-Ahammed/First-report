
#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (a[mid] == x)
            return mid;
        else if (x > a[mid])
            binary_search(a, x, mid + 1, ub);
        else
            binary_search(a, x, lb, mid - 1);
    }
    else
        return -1;

}
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Enter a value you want to search: ";
    cin >> x;

    int idx;
    idx = binary_search(a, x, 0, n - 1);
    if (idx != -1)
    {
        cout << "Index No: " << idx << " Position No: " << idx + 1 << endl;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}
