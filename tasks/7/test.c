void printArray_(int *a, int len) {
    for (int i = 0; i < len; i++) printf("%d ", a[i]);
}

#define printArray(arr) printArray_((arr), sizeof(arr)/sizeof(arr[0]))

int main(int argc, _TCHAR* argv[])
{
    int data[] = { 1,2,3,4 };
    printArray(data);
    return 0;
}
