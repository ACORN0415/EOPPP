int test_func(void) {
    int v0 = 19;
    int v1 = 98;
    int v2 = 45;
    int v3 = 9;
    int v4 = 60;
    int i;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
