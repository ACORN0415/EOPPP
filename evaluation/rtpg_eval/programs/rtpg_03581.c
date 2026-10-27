int test_func(void) {
    int v0 = 87;
    int v1 = 60;
    int v2 = 10;
    int v3 = 70;
    int v4 = 12;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
