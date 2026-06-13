package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {

    public static void main(String[] args) {

        // a
        Veena veena = new Veena();
        veena.play();

        // b
        Saxophone saxophone = new Saxophone();
        saxophone.play();

        // c
        Playable p;

        p = veena;
        p.play();

        p = saxophone;
        p.play();
    }
}
