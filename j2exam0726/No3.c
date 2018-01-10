#include <stdio.h>

int count(char str[]){
	int i;
	for( i = 0; str[i] != '\0'; i++){};
	return i;
}

int back_print(int i,char str[]){
	str[i] != '\0' && back_print(i+1,str);
	printf("%c",str[i]);
}

int count_dragon(int i,int stage,int count,char str[]){
	char Dragon[] = "Dragon";

	str[i] == Dragon[stage] ? stage++ : (stage=0);
	if(Dragon[stage] == '\0') count++,stage=0;
	if(str[i] == '\0') return count;
	return count_dragon(i+1,stage,count,str);
}

int dragon2hip(char str[]){
	char Dragon[] = "Dragon";
	int i,j,k,stage=0,start=0,end=0;

	for(i = 0;str[i+1] != '\0'; i++ ){
		if(str[i] == ' ' || str[i] == '\0'){
			start = end;
			end = i;

			//printf("s,e = %d,%d\n",start,i);
			for(j = start; j<i; j++){
				str[j] == Dragon[stage] ? stage++ : (stage=0);
			}
			if(Dragon[stage] == '\0'){
				stage = 0;
				printf("Hippoptamus");
			}else{
				for(j = start; j<i; j++){
					printf("%c",str[j]);
				}
			}
		}else{
		}
	}

}

int main(void)
{
  char str[] = "Dragon Ball is a Japanese manga series written and illustrated by Akira Toriyama. It was originally serialized in Weekly Shonen Jump from 1984 to 1995, with the 519 individual chapters published into 42 tankobon volumes by Shueisha. Dragon Ball was initially inspired by the classical Chinese novel Journey to the West. The series follows the adventures of the protagonist, Goku, from his childhood through adulthood as he trains in martial arts and explores the world in search of the seven orbs known as the Dragon Balls, which summon a wish-granting Dragon when gathered. Along his journey, Goku makes several friends and battles a wide variety of villains, many of whom also seek the Dragon Balls. The 42 tankobon have been adapted into two anime series produced by Toei Animation: Dragon Ball and Dragon Ball Z, which together were broadcast in Japan from 1986 to 1996. Additionally, the studio has developed nineteen animated feature films and three television specials, as well as a third anime titled Dragon Ball GT. Between 2009 and 2015, a revised, faster-paced version of Dragon Ball Z was broadcast under the title Dragon Ball Kai, in which most of the original version's footage not featured in the manga is removed. A fifth television series titled Dragon Ball Super began on July 5, 2015. Several companies have developed various types of merchandising based on the series leading to a large media franchise that includes films, both animated and live-action, collectible trading card games, numerous action figures, along with several collections of soundtracks and a large number of video games. The manga series was licensed for an English-language release in North America by Viz Media, in the United Kingdom by Gollancz Manga, and Australia and New Zealand by Madman Entertainment. The entire anime series was licensed by Funimation Entertainment for an English-language release in the United States, although the series has not always been dubbed by the same studio. There have been many films of the franchise including the first live-action film adaptation being produced in 1989 in Taiwan. In 2002, 20th Century Fox acquired the rights to produce an American-made live-action film titled Dragon ball Evolution that received a negative reception from critics and fans; the movie was released on April 10, 2009 in the United States. Since its release, Dragon Ball has become one of the most successful manga and anime series of all time. The manga's 42 volumes have sold over 156 million copies in Japan and more than 230 million copies worldwide, making it the second best-selling manga series in history. Reviewers have praised the art, characterization, and humor of the story. It is widely regarded as one of the greatest manga series ever made, with many manga artists such as Eiichiro Oda (One Piece), Masashi Kishimoto (Naruto), Tite Kubo (Bleach), Hiro Mashima (Rave Master, Fairy Tail) and Kentaro Yabuki (Black Cat) citing Dragon Ball as a source of inspiration for their own now popular works. The anime, particularly Dragon Ball Z, is also highly popular in various countries and was arguably one of the most influential in boosting the popularity of Japanese animation in Western culture.";

	printf("(1) len=%d",count(str));
	printf("\n");

	printf("(2)\n");
	back_print(0,str);
	printf("\n\n");
	
	printf("(3) The number of Dragon = %d",count_dragon(0,0,0,str));
	printf("\n");

	printf("(4)\n");
	dragon2hip(str);
	printf("\n");
	
  
  return 0;
}
