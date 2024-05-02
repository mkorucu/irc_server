#ifndef __ERROR_MESSAGES_H
#define __ERROR_MESSAGES_H


#define RPL_WELCOME(fd, nick, user, host) (fd + ":" + host + " 001 " + nick + " :Welcome to the Internet Relay Network " + nick + "!" + user + "@" + host)
#define RPL_YOURHOST(nick, host) ("002", ":Your host is " + host + ", running version " + VERSION)
#define RPL_CREATED(nick, date) ("003", ":This server was created " + date)

#define RPL_NOTOPIC(nick, channel) ("331 " + nick + " " + channel + " :No topic is set")
#define RPL_TOPIC(nick, channel, topic) ("332" + nick + " " + channel + " :" + topic)

#define WRONG_FORMATTIN() ("")

#define LOGIN(nickname, username) (": 001 " + nickname + " :Welcome to the IRC Network " + nickname + "!" + username + "\r")
#define NO_NICKNAME(client, nickname) (": 401 " + client + " " + nickname + " :No such nick\r")
#define NO_SUCH_CHANNEL(nickname, channel) (": 403 " + nickname + " " + channel + " :No such channel\r")
#define NICKNAME_IN_USE(nickname) (": 433 " + nickname + " :Nickname is already in use. Please provide your password with 'USERPASS: <password> if you have this nickname already!'\r")
#define NOTONCHANNEL(client, channel) (": 442 " + client + " " + channel + " :You're not on that channel\r")
#define USERONCHANNEL(client, channel) (": 443 " + client + " :cannot join because " + channel + "\r")
#define ERR_ALREADYREGISTERED(nickname) (": 462 " + nickname + " :Already registered.\r"  )
#define PASS_ERR() (": 464 :Password incorrect! Please check your password\r")
#define ERR_PASSWDMISMATCH(nick) (": 464 " + nick + "  : password supplied does not match the password expected by the server!\r")
#define BADCHANNEL(channel) (": 475 " + channel + " :Incorrect password for channel!\r")


#endif