int test_func(void) {
    int v0 = 70;
    int v1 = 25;
    int v2 = 39;
    int v3 = 100;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v3;
    }
    v1 = v1 - v0;
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
