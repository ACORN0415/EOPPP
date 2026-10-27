int test_func(void) {
    int v0 = 30;
    int v1 = 49;
    int v2 = 26;
    int v3 = 85;
    int i;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
