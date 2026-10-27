int test_func(void) {
    int v0 = 65;
    int v1 = 60;
    int v2 = 43;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
