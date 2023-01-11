//GTG

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

enum WType {ARTICLE, NOUN, VERB, PREPOSITION};
void genSentences(void);

char *articles[] = {"the", "a","one", "some", "any"};

char *nouns[] = {"boy", "girl", "dog", "town", "car"};

char *verbs[] = {"drove", "jumped", "ran", "walked", "skipped"};

char *prepositions[] = {"to", "from", "over", "under", "on"};

int main(void){
  srand(time(NULL));
  for (size_t i = 0; i < 20; i++){
    genSentences();
  }
  puts("\n\n");
}

void genSentences(void){
  char *getWordPtr(enum WType type);
  static enum WType sct[] = {ARTICLE, NOUN, VERB, PREPOSITION, ARTICLE, NOUN};

  static size_t numWords = (sizeof(sct) / sizeof(enum WType));
  static char* wordArr[6];

  size_t totalLength = 1;
  for (size_t i = 0; i < numWords; i++){
    wordArr[i] = getWordPtr(sct[i]);
    totalLength += (strlen(wordArr[i]) + 1);
  }

  char res[totalLength];
  res[0] = '\0';

  for (size_t i = 0, tmpInd; i < numWords; i++){
    strcat(res, wordArr[i]);
    tmpInd = strlen(res); 
    res[tmpInd] = (i == numWords - 1 ? '.' : ' ');
    res[tmpInd + 1] = '\0';
  }

  res[0] = toupper(res[0]);
  printf("%s ", res);

}
char *getWordPtr(enum WType type){

  size_t lwa;
  char *res;

  switch(type){

    case ARTICLE:
      lwa = sizeof(articles) / sizeof(char *);
      res = articles[rand() % lwa];
      break;

    case NOUN:
      lwa = sizeof(nouns) / sizeof(char *);
      res = nouns[rand() % lwa];
      break;

    case VERB:
      lwa = sizeof(verbs) / sizeof(char *);
      res = verbs[rand() % lwa];
      break;

    case PREPOSITION:
      lwa = sizeof(prepositions) / sizeof(char *);
      res = prepositions[rand() % lwa];
      break;

    default:
      res = NULL;
      break;
  }

  return (res);

}


//TYJC
