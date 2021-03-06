#include "cli_util.h"

namespace cli {

    void clear() {
        for (size_t i = 0; i < 32; ++i) cout << "\n";
        cout << endl;
    }

    void print_logo() {
        cout << "  ____        _   _   _           _     _           \n"
                " |  _ \\      | | | | | |         | |   (_)          \n"
                " | |_) | __ _| |_| |_| | ___  ___| |__  _ _ __  ___ \n"
                " |  _ < / _` | __| __| |/ _ \\/ __| '_ \\| | '_ \\/ __|\n"
                " | |_) | (_| | |_| |_| |  __/\\__ \\ | | | | |_) \\__ \\\n"
                " |____/ \\__,_|\\__|\\__|_|\\___||___/_| |_|_| .__/|___/\n"
                "                                         | |        \n"
                "                                         |_|        " << endl;
    }

    void print_win_message() {
        cout << " __     __                    _       _ \n"
                " \\ \\   / /                   (_)     | |\n"
                "  \\ \\_/ /__  _   _  __      ___ _ __ | |\n"
                "   \\   / _ \\| | | | \\ \\ /\\ / / | '_ \\| |\n"
                "    | | (_) | |_| |  \\ V  V /| | | | |_|\n"
                "    |_|\\___/ \\__,_|   \\_/\\_/ |_|_| |_(_)\n"
                "                                        \n"
                "                                        " << endl;
    }

    void print_loose_message() {
        cout << " __     __           _                      _ \n"
                " \\ \\   / /          | |                    | |\n"
                "  \\ \\_/ /__  _   _  | | ___   ___  ___  ___| |\n"
                "   \\   / _ \\| | | | | |/ _ \\ / _ \\/ __|/ _ \\ |\n"
                "    | | (_) | |_| | | | (_) | (_) \\__ \\  __/_|\n"
                "    |_|\\___/ \\__,_| |_|\\___/ \\___/|___/\\___(_)\n"
                "                                              \n"
                "                                              " << endl;
    }

    void print_player1_win_message() {
        cout << "  _____  _                         __  __          __         _ \n"
                " |  __ \\| |                       /_ | \\ \\        / /        | |\n"
                " | |__) | | __ _ _   _  ___ _ __   | |  \\ \\  /\\  / /__  _ __ | |\n"
                " |  ___/| |/ _` | | | |/ _ \\ '__|  | |   \\ \\/  \\/ / _ \\| '_ \\| |\n"
                " | |    | | (_| | |_| |  __/ |     | |    \\  /\\  / (_) | | | |_|\n"
                " |_|    |_|\\__,_|\\__, |\\___|_|     |_|     \\/  \\/ \\___/|_| |_(_)\n"
                "                  __/ |                                         \n"
                "                 |___/                                          " << endl;
    }

    void print_player2_win_message() {
        cout << "  _____  _                         ___   __          __         _ \n"
                " |  __ \\| |                       |__ \\  \\ \\        / /        | |\n"
                " | |__) | | __ _ _   _  ___ _ __     ) |  \\ \\  /\\  / /__  _ __ | |\n"
                " |  ___/| |/ _` | | | |/ _ \\ '__|   / /    \\ \\/  \\/ / _ \\| '_ \\| |\n"
                " | |    | | (_| | |_| |  __/ |     / /_     \\  /\\  / (_) | | | |_|\n"
                " |_|    |_|\\__,_|\\__, |\\___|_|    |____|     \\/  \\/ \\___/|_| |_(_)\n"
                "                  __/ |                                           \n"
                "                 |___/                                            " << endl;
    }
}