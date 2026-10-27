int test_func(void) {
    int v0 = 94;
    int v1 = 21;
    int v2 = 44;
    int i;
    v1 = v1 * 10;
    v0 = 86;
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
