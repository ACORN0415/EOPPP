int test_func(void) {
    int v0 = 44;
    int v1 = 67;
    int v2 = 83;
    int i;
    v2 = v2 + v1;
    v1 = 39;
    return v0;
}
int main(void) { return test_func(); }
