#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
        cin >> arr1[i];
    for(int i=0;i<m;i++)
        cin >> arr2[i];
    int i = 0;
    int j = 0;
    int flag = -1; // Used to ignore the duplicates in an array
    // Finding union
    cout << "Union of the two arrays: ";
    while(i < n && j < m)
    {
        if(arr1[i] == arr2[j])
        {
            if(arr1[i] != flag)
            {
                flag = arr1[i];
                cout << arr1[i++] << " ";
                j++;
            }
            else
            {
                i++; j++;
            }
        }
        else if(arr1[i] < arr2[j])
        {
            if(arr1[i] != flag)
            {
                flag = arr1[i];
                cout << arr1[i++] << " ";
            }
            else
                i++;
        }
        else
        {
            if(arr2[j] != flag)
            {
                flag = arr2[j];
                cout << arr2[j++] << " ";
            }
            else
                j++;
        }
    }
    while(i < n)
    {
        if(arr1[i] != flag)
        {
            flag = arr1[i];
            cout << arr1[i++] << " ";
        }
        else
            i++;
    }
    while(j < m)
    {
        if(arr2[j] != flag)
        {
            flag = arr2[j];
            cout << arr2[j++] << " ";
        }
        else
            j++;
    }
    cout << endl;
    // Finding intersection
    i = 0;
    j = 0;
    cout << "Intersection of the two arrays: ";
    while(i < n && j < m)
    {
        if(arr1[i] == arr2[j])
        {
            cout << arr1[i++] << " ";
            j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
return 0;
}
