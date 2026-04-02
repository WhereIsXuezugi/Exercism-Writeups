namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
        public:
            int x_coordinate;
            int y_coordinate;
            Alien(int x, int y) {
                x_coordinate = x;
                y_coordinate = y;
            }
            int get_health() {
                return health;
            }
            bool hit() {
                if (health) {
                    --health;
                }
                return health;
            }
            bool is_alive() {
                return health > 0;
            }
            bool teleport(int x, int y) {
                x_coordinate = x;
                y_coordinate = y;
                return true;
            }
            bool collision_detection(const Alien& ref_alien) {
                return ref_alien.x_coordinate == x_coordinate && ref_alien.y_coordinate == y_coordinate;
            }
        private:
            int health{3};
    };

}  // namespace targets
