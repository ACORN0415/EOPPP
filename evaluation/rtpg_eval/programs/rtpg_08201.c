int test_func(void) {
    int v0 = 44;
    int v1 = 54;
    int v2 = 31;
    int i;
    v1 = v1 - v0;
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
