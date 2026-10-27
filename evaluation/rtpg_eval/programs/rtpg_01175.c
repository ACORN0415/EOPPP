int test_func(void) {
    int v0 = 50;
    int v1 = 18;
    int v2 = 67;
    int v3 = 68;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
