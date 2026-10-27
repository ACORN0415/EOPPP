int test_func(void) {
    int v0 = 12;
    int v1 = 34;
    int v2 = 49;
    int v3 = 28;
    int v4 = 66;
    int v5 = 35;
    int v6 = 60;
    int v7 = 87;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v3;
    }
    v1 = v1 - v0;
    v5 = 15;
    return v0;
}
int main(void) { return test_func(); }
