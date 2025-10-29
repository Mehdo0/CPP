# 🚀 Mon Parcours C++ (CPP) à 42

Ce dépôt contient l'ensemble de mon travail sur les modules C++ de 42. Ce parcours est conçu pour passer du C procédural au C++ "moderne" et orienté objet (principalement C++98, avec des concepts plus récents), en mettant l'accent sur la programmation orientée objet, la surcharge d'opérateurs, les templates et la STL.

CPP Module 00 : Les Fondamentaux 🏁

Le premier pas hors du monde du C. Ce module introduit les concepts de base de la POO.

## Thèmes Abordés :

### 🏷️ Espaces de noms (namespaces).

### 🧱 Classes, attributs (membres) et fonctions (méthodes) membres.

### 🔒 Encapsulation : public, private.

### 📤 Flux d'E/S standard (std::cout, std::cin, std::cerr).

### 📋 Listes d'initialisation dans les constructeurs.

### 🔗 Pointeurs vs Références.

### 👉 Le pointeur this.

### 🏛️ Membres static et const.

## Difficultés Rencontrées :

### 🤯 Le changement de paradigme par rapport au C.

### ✍️ La nouvelle syntaxe (classes, ::, etc.).

### 🤔 Comprendre la différence fondamentale between une référence (&) qui est un alias, et un pointeur (*) qui est une adresse.

### 🚦 La gestion de la visibilité avec public et private.

# CPP Module 01 : Allocation Mémoire et Flux 💾

Ce module explore la gestion manuelle de la mémoire en C++ et la manipulation de fichiers.

## Thèmes Abordés :

### 🧠 Allocation dynamique avec new et delete.

### 👆 Pointeurs sur des membres.

### 🔄 Références (en profondeur).

### 📂 Flux de fichiers (ifstream, ofstream, fstream).

### 📜 Manipulation de std::string.

## Difficultés Rencontrées :

### 💧 Éviter les fuites de mémoire (memory leaks).

### ⚠️ La différence entre new/delete et malloc/free (appel des constructeurs/destructeurs).

### 🚫 La gestion d'erreurs lors de l'ouverture et de la lecture/écriture de fichiers.

# CPP Module 02 : Forme Canonique de Coplien 📜

L'un des modules les plus denses. Il introduit la surcharge d'opérateurs et la nécessité de la forme canonique (ou "Règle des Trois").

## Thèmes Abordés :

### ➕ Surcharge d'opérateurs (arithmétiques, de comparaison, d'assignation).

### 📖 Forme Canonique de Coplien (ou "Règle des Trois" en C++98) :

  1. Constructeur par défaut.

  2. Destructeur.

  3. Constructeur par copie (Copy Constructor).

  4. Opérateur d'assignation (Assignment Operator Overload).

### 👥 Notion de copie superficielle (shallow copy) vs copie profonde (deep copy).

### 🔢 Création d'une classe de nombres à virgule fixe.

## Difficultés Rencontrées :

### 🎯 La "Règle des Trois" (maintenant "Règle des Cinq" en C++11) est le cœur de la difficulté.

### 🕵️ Comprendre quand et pourquoi on a besoin d'un constructeur par copie et d'un opérateur d'assignation personnalisés (dès qu'on gère de la mémoire brute).

### ✅ Implémenter correctly l'opérateur d'assignation (vérification de l'auto-assignation, libération de l'ancienne mémoire, copie profonde).

### 🧮 La logique des nombres à virgule fixe.

# CPP Module 03 : Héritage 🧬

Introduction au deuxième pilier de la POO : l'héritage.

## Thèmes Abordés :

### ➡️ Héritage simple.

### 🕰️ Ordre d'appel des constructeurs et des destructeurs.

### 🙈 Visibilité : public, protected, private.

### 💎 Le "Problème du Diamant" (Diamond Problem).

### 👑 Héritage virtuel.

## Difficultés Rencontrées :

### 🧩 Le "Problème du Diamant" est un concept complexe à appréhender.

### 💡 Comprendre l'utilité de l'héritage virtual pour résoudre ce problème.

### 🔐 La nuance entre protected (visible par les enfants) et private (invisible même pour les enfants).

# CPP Module 04 : Polymorphisme et Classes Abstraites 🎭

Le troisième pilier de la POO : le polymorphisme, qui permet de manipuler des objets de classes dérivées via un pointeur ou une référence de classe de base.

## Thèmes Abordés :

### 👽 Polymorphisme de sous-typage.

### 🏃 Liaison tardive (late binding) avec le mot-clé virtual.

### 👻 Fonctions virtuelles pures (= 0).

### 🚫 Classes abstraites (qui ne peuvent pas être instanciées).

### 📐 Interfaces (classes abstraites ne contenant que des fonctions virtuelles pures).

### 🗑️ Destructeurs virtuels (essentiel !).

## Difficultés Rencontrées :

### ❓ Comprendre pourquoi le destructeur de la classe de base doit être virtuel si on prévoit un héritage polymorphique (pour éviter les fuites de mémoire lors de la suppression d'un objet dérivé via un pointeur de base).

### 👻 La différence subtile entre une classe abstraite et une interface.

### 📚 Le concept de "vtable" (table des fonctions virtuelles) qui permet la liaison tardive.

# CPP Module 05 : Exceptions ⚠️

Apprendre à gérer les erreurs de manière "moderne" en C++, sans se contenter de codes de retour.

## Thèmes Abordés :

### 🛡️ Blocs try, catch et le mot-clé throw.

### 🎣 Capture d'exceptions spécifiques (catch (MyException& e)) ou génériques (catch (...)).

### 🧅 Exceptions imbriquées.

### 🔒 La garantie de sécurité des exceptions (Exception Safety).

### 💥 Le concept de "déroulement de la pile" (stack unwinding).

## Difficultés Rencontrées :

### 🤷 Savoir quand lancer une exception (pour des erreurs exceptionnelles, pas pour de la logique de contrôle).

### 🛡️ Écrire du code "exception-safe". Cela introduit le concept fondamental de RAII (Resource Acquisition Is Initialization), où la gestion des ressources (comme la mémoire ou les fichiers) est liée à la durée de vie des objets sur la pile.

ιε La hiérarchie des exceptions de std::exception.

# CPP Module 06 : Casts et Conversions 🔄

Le C++ hérite des casts du C ((type)value), mais introduit quatre opérateurs de cast explicites et plus sûrs.

## Thèmes Abordés :

`static_cast` : Pour les conversions logiques (e.g., int en float, pointeur de base en pointeur dérivé).

`dynamic_cast` : Pour les conversions polymorphiques (downcasting sécurisé), nécessite le RTTI.

`reinterpret_cast` : Le plus dangereux, réinterprète les bits (e.g., pointeur en entier).

`const_cast` : Pour ajouter ou (surtout) enlever la qualification const.

### 📈 Conversions de types scalaires (nombres).

## Difficultés Rencontrées :

### 🤔 Savoir quel cast utiliser dans quelle situation.

### ☢️ Comprendre les dangers immenses de reinterpret_cast et const_cast (comportement indéfini s'ils sont mal utilisés).

### ⏳ Le coût de dynamic_cast (vérification à l'exécution).

# CPP Module 07 : Templates 📝

Introduction à la programmation générique. Permet d'écrire du code qui fonctionne avec n'importe quel type, tant qu'il respecte certaines contraintes.

## Thèmes Abordés :

### ⚙️ Templates de fonctions.

### 📦 Templates de classes.

### 🔢 Paramètres de template non-types (e.g., template<int N>).

## Difficultés Rencontrées :

### 🤯 La syntaxe, qui peut devenir complexe.

### 📜 Les messages d'erreur de compilation, qui sont souvent très longs et difficiles à déchiffrer.

(.hpp) Le fait que le code des templates doit être défini dans les fichiers d'en-tête (.hpp) (dans la plupart des cas).

# CPP Module 08 : Standard Template Library (STL) - Conteneurs 🗃️

Plongée dans la bibliothèque standard C++. Ce module se concentre sur les conteneurs et les itérateurs.

## Thèmes Abordés :

### 📏 Conteneurs séquentiels (std::vector, std::list, std::deque).

### 🔑 Conteneurs associatifs (std::map, std::set).

### 🍽️ Adaptateurs de conteneurs (std::stack, std::queue).

### 🚶 Le concept d'itérateurs (le "lien" abstrait entre les conteneurs et les algorithmes).

### 🔍 Algorithmes de base de la STL (std::find, std::sort, etc.).

## Difficultés Rencontrées :

### 🧰 Choisir le bon conteneur pour le bon usage (e.g., vector pour accès rapide, list pour insertions/suppressions rapides au milieu).

### 💥 Comprendre la "logique" des itérateurs, notamment leur invalidation (e.g., ajouter un élément à un vector peut invalider tous ses itérateurs).

# CPP Module 09 : STL - Algorithmes et Conteneurs Avancés 🧠

Ce module (parfois un projet plus large) pousse plus loin l'utilisation de la STL.

# Thèmes Abordés :

### 🗝️ Conteneurs associatifs avancés (std::multimap, std::multiset).

### 🧑‍💻 Algorithmes plus complexes (std::transform, std::for_each, etc.).

### 🏗️ Implémentation d'un projet combinant plusieurs conteneurs (par exemple, RPN calculator, Bitcoin database).

# Difficultés Rencontrées :

### 🤯 Le changement de paradigme par rapport au C.

### ✍️ La nouvelle syntaxe (classes, ::, etc.).

### 🤔 Comprendre la différence fondamentale entre une référence (&) qui est un alias, et un pointeur (*) qui est une adresse.

### 🚦 La gestion de la visibilité avec public et private.
