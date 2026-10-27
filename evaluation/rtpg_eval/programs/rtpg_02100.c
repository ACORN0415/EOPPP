int test_func(void) {
    int v0 = 5;
    int v1 = 70;
    int v2 = 81;
    int v3 = 25;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = 44;
    return v0;
}
int main(void) { return test_func(); }
