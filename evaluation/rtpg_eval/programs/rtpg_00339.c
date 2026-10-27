int test_func(void) {
    int v0 = 50;
    int v1 = 77;
    int v2 = 18;
    int v3 = 36;
    int v4 = 35;
    int v5 = 84;
    int v6 = 34;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v2;
    }
    v0 = 12;
    v5 = v5 + v1;
    return v0;
}
int main(void) { return test_func(); }
