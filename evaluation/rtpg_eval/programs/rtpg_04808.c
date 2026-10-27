int test_func(void) {
    int v0 = 43;
    int v1 = 35;
    int v2 = 5;
    int v3 = 12;
    int v4 = 7;
    int i;
    v1 = v1 - v2;
    if (v4 > v3) { v4 = v3; }
    v2 = 35;
    return v0;
}
int main(void) { return test_func(); }
