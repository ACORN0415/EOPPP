int test_func(void) {
    int v0 = 84;
    int v1 = 37;
    int v2 = 45;
    int v3 = 75;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
