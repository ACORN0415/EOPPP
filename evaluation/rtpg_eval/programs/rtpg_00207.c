int test_func(void) {
    int v0 = 61;
    int v1 = 94;
    int v2 = 96;
    int v3 = 95;
    int i;
    v2 = 9;
    v3 = v3 + v3;
    return v0;
}
int main(void) { return test_func(); }
