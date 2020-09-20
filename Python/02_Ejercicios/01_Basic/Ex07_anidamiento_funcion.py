

def saludar(lang):
    def saludar_es():
        print "Hola"

    def saludar_en():
        print "Hello"

    def saludar_fr():
        print "Salut"

    def saludar_lt():
        print "Salutem"

    lang_func = {"es": saludar_es,
        "en": saludar_en,
        "fr": saludar_fr}

if __name__ == "__main__":
    return lang_func[lang]
    f = saludar("es")
    f()
