int test_func(void) {
    int v0 = 4;
    int v1 = 85;
    int v2 = 0;
    int v3 = 45;
    int v4 = 98;
    int i;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
