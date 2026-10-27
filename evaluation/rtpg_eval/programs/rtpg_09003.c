int test_func(void) {
    int v0 = 5;
    int v1 = 34;
    int v2 = 72;
    int v3 = 49;
    int v4 = 34;
    int v5 = 57;
    int i;
    v5 = v5 + v0;
    v0 = v0 - v5;
    return v0;
}
int main(void) { return test_func(); }
