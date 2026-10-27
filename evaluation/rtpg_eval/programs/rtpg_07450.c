int test_func(void) {
    int v0 = 55;
    int v1 = 12;
    int v2 = 81;
    int v3 = 79;
    int v4 = 60;
    int v5 = 95;
    int i;
    v1 = 100;
    v2 = v2 - v4;
    if (v1 > v3) { v1 = v3; }
    return v0;
}
int main(void) { return test_func(); }
