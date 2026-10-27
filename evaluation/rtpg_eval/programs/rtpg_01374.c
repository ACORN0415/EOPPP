int test_func(void) {
    int v0 = 10;
    int v1 = 50;
    int v2 = 52;
    int v3 = 9;
    int v4 = 100;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
