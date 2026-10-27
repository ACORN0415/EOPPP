int test_func(void) {
    int v0 = 19;
    int v1 = 61;
    int v2 = 50;
    int v3 = 73;
    int v4 = 7;
    int v5 = 29;
    int v6 = 3;
    int v7 = 89;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v7;
    }
    return v0;
}
int main(void) { return test_func(); }
