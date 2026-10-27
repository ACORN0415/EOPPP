int test_func(void) {
    int v0 = 100;
    int v1 = 3;
    int v2 = 85;
    int v3 = 76;
    int v4 = 41;
    int v5 = 46;
    int v6 = 29;
    int i;
    for (i = 0; i < 7; i++) {
        v6 = v6 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
