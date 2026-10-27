int test_func(void) {
    int v0 = 89;
    int v1 = 25;
    int v2 = 89;
    int v3 = 95;
    int v4 = 85;
    int v5 = 29;
    int v6 = 38;
    int v7 = 12;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
