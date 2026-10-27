int test_func(void) {
    int v0 = 97;
    int v1 = 15;
    int v2 = 73;
    int v3 = 59;
    int v4 = 100;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v3;
    }
    if (v2 > v3) { v2 = v3; }
    return v0;
}
int main(void) { return test_func(); }
