int test_func(void) {
    int v0 = 54;
    int v1 = 45;
    int v2 = 25;
    int v3 = 15;
    int v4 = 52;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
