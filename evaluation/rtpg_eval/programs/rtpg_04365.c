int test_func(void) {
    int v0 = 96;
    int v1 = 74;
    int v2 = 39;
    int i;
    v0 = v0 + v0;
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }
