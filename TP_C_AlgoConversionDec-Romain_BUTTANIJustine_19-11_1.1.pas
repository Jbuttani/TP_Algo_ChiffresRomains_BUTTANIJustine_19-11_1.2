ALGO chiffre_romain
1/ Faire un menu : 
1. Transformation de chiffre arabe à chiffre romain;
2. Transformation de chiffre romain à chiffre arabe.
0. Quitter

ALGORITHME conversion_decVersRomain
//BUT : Transformer un nombre arabe en nombre romain.
//PRINCIPE : Décomposer chaque chiffre du nombre pour lui attribuer une valeur romaine.
//ENTREE : Une nombre arabe.
//SORTIE : Un nombre romain.

VAR 
	nbre : ENTIER
	final : CHAINE

DEBUT
	ECRIRE "Bienvenue. Veuillez entrer un nombre."

	SI nbre>=0 ET <=3999 ALORS
		ECRIRE "Mhh... Il semble que ce soit impossible à traduire..."
	FINSI

	SI nbre<=1000 ET >4000 ALORS 
		REPETER
			nbre<-nbre-1000
			final<-final+'M'
		JUSQUA nbre<1000

		SI nbre<=900 ET nbre>=999 ALORS
			final<-final+'CM'
			nbre<-nbre-900
		SINON SI nbre<=500 ET nbre>=899 ALORS
			final<-final+'D'
			nbre<-nbre-500
				TANTQUE nbre<100 FAIRE 
					final<-final+'C'
					nbre<-nbre-100
				FINTANTQUE
		SINON SI nbre<=400 ET nbre>=499  ALORS
			final<-final+'CD'
			nbre<-nbre-400
		SINON SI nbre<100 ET nbre>=399 ALORS
			REPETER
				final<-final+'C'
				nbre<-nbre-100
			JUSQUA nbre>100

			SI nbre<=90 ET nbre>=99 ALORS
				final<-final+'XC'
				nbre<-nbre-90
			SINON SI nbre<=50 ET nbre>=89 ALORS
				final<-final+'L'
				nbre<-nbre-50
					TANTQUE nbre<10 FAIRE 
						final<-final+'X'
						nbre<-nbre-10
					FINTANTQUE
			SINON SI nbre<=40 ET nbre>=49 ALORS
				final<-final+'XL'
				nbre<-nbre-40
			SINON SI nbre<10 ET nbre<=39 ALORS
				REPETER
					final<-final+'X'
					nbre<-nbre-10
				JUSQUA nbre>10

				SI nbre=9 ALORS
					final<-final+'IX'
				SINON SI nbre<=5 ET nbre>=8 ALORS
					final<-final+'V'
					nbre<-nbre-5
						TANTQUE nbre>1 FAIRE 
							final<-final+'I'
							nbre<-nbre-1
						FINTANTQUE
				SINON SI nbre=4 ALORS
					final<-final+'IV'
				SINON SI nbre<1 ET nbre>=3  ALORS
					REPETER
						final<-final+'I'
						nbre<-nbre-1
					JUSQUA nbre=0
				FINSI
			FINSI
		FINSI
	FINSI

	SI nbre<=900 ET nbre>=999 ALORS
			final<-final+'CM'
			nbre<-nbre-900
	SINON SI nbre<=500 ET nbre>=899 ALORS
		final<-final+'D'
		nbre<-nbre-500
			TANTQUE nbre>100 FAIRE 
				final<-final+'C'
				nbre<-nbre-100
			FINTANTQUE
	SINON SI nbre<=400 ET nbre>=499  ALORS
		final<-final+'CD'
		nbre<-nbre-400
	SINON SI nbre<100 ET nbre>=399 ALORS
		REPETER
			final<-final+'C'
			nbre<-nbre-100
		JUSQUA nbre>100

		SI nbre<=90 ET nbre>=99 ALORS
			final<-final+'XC'
			nbre<-nbre-90
		SINON SI nbre<=50 ET nbre>=89 ALORS
			final<-final+'L'
			nbre<-nbre-50
				TANTQUE nbre>10 FAIRE 
					final<-final+'X'
					nbre<-nbre-10
				FINTANTQUE
		SINON SI nbre<=40 ET nbre>=49 ALORS
			final<-final+'XL'
			nbre<-nbre-40
		SINON SI nbre<10 ET nbre<=39 ALORS
			REPETER
				final<-final+'X'
				nbre<-nbre-10
			JUSQUA nbre>10

			SI nbre=9 ALORS
				final<-final+'IX'
			SINON SI nbre<=5 ET nbre>=8 ALORS
				final<-final+'V'
				nbre<-nbre-5
					TANTQUE nbre>1 FAIRE 
						final<-final+'X'
						nbre<-nbre-1
					FINTANTQUE
			SINON SI nbre=4 ALORS
				final<-final+'IV'
			SINON SI nbre<1 ET nbre>=3  ALORS
				REPETER
					final<-final+'I'
					nbre<-nbre-1
				JUSQUA nbre=0
			FINSI
		FINSI
	FINSI

	SI nbre<=90 ET nbre>=99 ALORS
			final<-final+'XC'
			nbre<-nbre-90
	SINON SI nbre<=50 ET nbre>=89 ALORS
		final<-final+'L'
		nbre<-nbre-50
			TANTQUE nbre>10 FAIRE 
				final<-final+'X'
				nbre<-nbre-10
			FINTANTQUE
	SINON SI nbre<=40 ET nbre>=49 ALORS
		final<-final+'XL'
		nbre<-nbre-40
	SINON SI nbre<10 ET nbre<=39 ALORS
		REPETER
			final<-final+'X'
			nbre<-nbre-10
		JUSQUA nbre>10

		SI nbre=9 ALORS
			final<-final+'IX'
		SINON SI nbre<=5 ET nbre>=8 ALORS
			final<-final+'V'
			nbre<-nbre-5
				TANTQUE nbre>1 FAIRE 
					final<-final+'X'
					nbre<-nbre-1
				FINTANTQUE
		SINON SI nbre=4 ALORS
			final<-final+'IV'
		SINON SI nbre<1 ET nbre>=3  ALORS
			REPETER
				final<-final+'I'
				nbre<-nbre-1
			JUSQUA nbre=0
		FINSI
	FINSI

	SI nbre=9 ALORS
		final<-final+'IX'
	SINON SI nbre<=5 ET nbre>=8 ALORS
		final<-final+'V'
		nbre<-nbre-5
			TANTQUE nbre>1 FAIRE 
				final<-final+'X'
				nbre<-nbre-1
			FINTANTQUE
	SINON SI nbre=4 ALORS
		final<-final+'IV'
	SINON SI nbre<1 ET nbre>=3  ALORS
		REPETER
			final<-final+'I'
			nbre<-nbre-1
		JUSQUA nbre=0
	FINSI

	ECRIRE final