int test_func(void) {
    int v0 = 67;
    int v1 = 74;
    int v2 = 84;
    int v3 = 29;
    int i;
    v2 = 50;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v1;
    }
    v0 = v0 + v1;
    v0 = v0 - v3;
    return v0;
}
int main(void) { return test_func(); }
