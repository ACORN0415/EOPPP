int test_func(void) {
    int v0 = 50;
    int v1 = 39;
    int v2 = 29;
    int i;
    v2 = 34;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
